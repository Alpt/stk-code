#version 300 es

in vec3 Position;
in vec2 Texcoord;
out vec2 uv;

void main() {
	uv = Texcoord;
	gl_Position = vec4(Position, 1.);
}
