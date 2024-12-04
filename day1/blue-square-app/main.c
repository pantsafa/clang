#include <gtk/gtk.h>

// Global variables to store the position of the square
int square_x = 50;
int square_y = 50;

// Global variables to track mouse movement
int last_x = 0;
int last_y = 0;


//this fucntion is called whenever the drawing area needs to be drawan
gboolean on_draw_event(GtkWidget *widget, cairo_t *cr, gpointer user_data) {
	// draw a blue square
	cairo_set_source_rgb(cr, 0, 0, 1);
	cairo_rectangle(cr, square_x, square_y, 100, 100);
	cairo_fill(cr);
	return FALSE;	
}


gboolean on_motion_notify_event(GtkWidget *widget, GdkEventMotion *event, gpointer user_data) {
	// Update the position of the square based on the window position
	int dx = event->x - last_x;
	int dy = event->y - last_y;
	
	// Update last mouse position
	last_x = event->x;
	last_y = event->y;

	// Force a redraw of the drawing are
	gtk_widget_queue_draw(widget);

	return TRUE;
}

int main(int argc, char *argv[]) { 
	gtk_init(&argc, &argv);

	// cretes a new window and adds the title
	
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Blue Square App");
	gtk_window_set_default_size(GTK_WINDOW(window), 400, 500);
	
	// creates a drawing area for the square
	GtkWidget *drawing_area = gtk_drawing_area_new();
	gtk_container_add(GTK_CONTAINER(window), drawing_area);
	
	// Enable mouse movement tracking
	gtk_widget_add_events(drawing_area, GDK_POINTER_MOTION_MASK);

	// coonect the draw dignal to callnback function
	g_signal_connect(G_OBJECT(drawing_area), "draw", G_CALLBACK(on_draw_event), NULL);

	

	// Connect "Configure-event" signal of the window to a call back function (on_configure_event) taht will be called whenever the window is moved or resized.
	g_signal_connect(window,"motion-notify-event", G_CALLBACK(on_motion_notify_event), NULL);
	
	// This will destroy and close the window
	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

	// make all the widget visible
	gtk_widget_show_all(window);

	gtk_main();

	return 0;	
}
