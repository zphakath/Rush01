
#include "Mini.hpp"

void	Mini::initDisplay(void) {
	sf::RenderWindow window(sf::VideoMode(852, 480), "ft_gkrellm", sf::Style::Default);
    sf::Texture texture;
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    //alternative instantiation:
    //sprite.setTexture(texture);
    sf::Font font;

    if (!font.loadFromFile("KeepCalm-Medium.ttf"))
    {
        // handle error
    }

    //for img
    if (!texture.loadFromFile("pic.jpg"))
    {
        std::cout << "Error loading texture (image)" << std::endl;
    }
    sf::Sprite sprite(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, 852, 480));
    //window.clear(sf::Color::White);
    rectangle.setFillColor(sf::Color::Black);
    while (window.isOpen())
    {
        //create an event obj
        sf::Event evnt;
        while (window.pollEvent(evnt))
        {
            if (evnt.type == evnt.Closed)
            {
                window.close();
            }
        }

        /*Dateinfo * info = new Dateinfo();
        Cpuinfo * cpu = new Cpuinfo();
        Osinfo * os_info = new Osinfo();
        Hostname * host = new Hostname();
        NetworkInfo * net = new NetworkInfo();*/

        usleep(300);
        sf::Text text_date;
        sf::Text text_cpu;
        sf::Text  text_osinfo;
        sf::Text text_clockspeed;
        sf::Text text_host;
        sf::Text text_net;

        //text date
        text_date.setFont(font);
        text_date.setString(this->_gr.getDateTime());
        text_date.setFillColor(sf::Color::Black);
        text_date.setCharacterSize(25);
        text_date.setPosition((852/2) - 200, 0);
        window.draw(sprite);
        window.draw(text_date);

        //text clock speed
        text_clockspeed.setFont(font);
        text_clockspeed.setString(this->_cpu.getCpuSpeed());
        text_clockspeed.setFillColor(sf::Color::Black);
        text_clockspeed.setCharacterSize(15);
        text_clockspeed.setPosition((852/2) - 175, 35);
        window.draw(text_clockspeed);
        rectangle.setPosition(800, 450);
        rectangle.setSize(sf::Vector2f(50, 100));

        //text cpu
        text_cpu.setFont(font);
        text_cpu.setString(this->_cpu.getCores());
        text_cpu.setFillColor(sf::Color::Green);
        text_cpu.setCharacterSize(11);
        text_cpu.setPosition((852/2) - 100, 480/2);
        window.draw(text_cpu);

        //text network

		std::stringstream	stream;
	   
		stream << this->_net.getIn();
        text_osinfo.setFont(font);
        text_osinfo.setString(stream.str());
        text_osinfo.setFillColor(sf::Color::Black);
        text_osinfo.setCharacterSize(15);
        text_osinfo.setPosition((852/2) - 400, 480/2 - 70);
        window.draw(text_osinfo);

        //text host name
        text_host.setFont(font);
        text_host.setString(this->_gr.getHostName());
        text_host.setFillColor(sf::Color::Black);
        text_host.setCharacterSize(15);
        text_host.setPosition((852/2) - 400, 480/2 - 100);
        window.draw(text_host);

        //text network
		std::stringstream	stream1;
		stream1 << this->_net.getOut();
        text_net.setFont(font);
        text_net.setString(stream1.str());
        text_net.setFillColor(sf::Color::Black);
        text_net.setCharacterSize(15);
        text_net.setPosition((852/2) - 230, 450);
        window.draw(text_net);
        window.draw(rectangle);

        window.display();
	}
}

Mini::Mini(void) {
}

Mini::Mini(General & gi, CpuModule & cp, Rammodule & rm, 
					Network & nt) {
    this->_gr = gi;
    this->_cpu = cp;
    this->_ram = rm;
    this->_net = nt;
	initDisplay();
}

Mini::Mini(Mini const & rhs) { *this = rhs; }

Mini & Mini::operator=(Mini const &) {
	return (*this);
}

Mini::~Mini(void) { }
