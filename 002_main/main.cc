/* A very simple main file for starting a GTK program.
 * License: GPL version 3.
 * License text available at: https://www.gnu.org/licenses/gpl-3.0.txt
 */

#include <gtkmm/application.h>
#include <gtkmm/window.h>

#include <iostream>

int main( int argc, char *argv[] ) {
	auto app = Gtk::Application::create( argc, argv );
	Gtk::Window main_window;
	if( !app->run( main_window ) ) {
		std::cout << "We can do closing stuff here." << std::endl;
		return 0;
	}
	std::cerr << "An error happened if we get to here." << std::endl;
	return 1;
}