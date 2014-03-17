#version 150

uniform mat4 projectionMatrix;
uniform mat4 modelViewMatrix;
uniform mat4 modelViewProjectionMatrix;

in vec4  position;
in vec2  texcoord;

out vec2 v_TexCoordinate;

void main(){
    
	//get our current vertex position so we can modify it
	v_TexCoordinate = texcoord;
    gl_Position = modelViewProjectionMatrix * position;
}