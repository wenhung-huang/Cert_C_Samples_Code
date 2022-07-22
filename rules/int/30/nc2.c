// INT30-C: Noncompliant Code Example

//#include "cairoint.h"
/*
int main(){
pen->num_vertices = _cairo_pen_vertices_needed(
  gstate->tolerance, radius, &gstate->ctm
);
pen->vertices = malloc(
  pen->num_vertices * sizeof(cairo_pen_vertex_t)
);
}
*/