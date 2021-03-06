// __multiversion__
// This signals the loading code to prepend either #version 100 or #version 300 es as apropriate.

#define TEST

#include "shaders/fragmentVersionSimple.h"

#include "shaders/uniformShaderConstants.h"

//uniform highp float TIME;

varying vec4 color;

void main()
{
	gl_FragColor = vec4(color.rgb * CURRENT_COLOR.rgb * color.a, color.a);
	
	#ifdef TEST
		gl_FragColor *= color * /*TIME**/2.0;
	#endif
}
