#ifndef __OBJECT_H__
#define __OBJECT_H__

#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Shape.hpp>

class Object {
public:
	float					x;
	float					y;
	float					width;
	float					height;

							Object( float x, float y, float width, float height );

	void					Draw( sf::RenderTarget &canvas );

private:
	sf::Shape		shape;
};

#endif