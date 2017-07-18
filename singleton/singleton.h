

class GameSetting{
private:
	static GameSetting* _instance;
	int _brightness;
	int _width;
	int _height;
	
	GameSetting() { _brightness = 54; 
			_width = 643; 
			_height = 324; }
public:
	static GameSetting* getInstance();
	void setwidth( int width ) { _width = width;}
	void setbrightness( int brightness ) { _brightness = brightness;}
	void setheight( int height ) { _height = height;}

	int getwidth() { return _width; }
	int getbrightness() { return _brightness; }
	int getheight() { return _height; }

	void printSettings(){
		std::cout << "brightness is " << _brightness <<  std::endl  
		<< "width  is " << _width << std::endl << " height is " << _height << std::endl;
	}
};

