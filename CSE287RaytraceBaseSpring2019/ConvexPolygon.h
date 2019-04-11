#pragma once
#include "Plane.h"

class ConvexPolygon :
	public Plane
{
public:
	ConvexPolygon(std::vector<dvec3> vertices, const color & material);
	virtual HitRecord findClosestIntersection(const Ray & ray);
	int checkLeft(dvec3 v1, dvec3 v2, dvec3 p, dvec3 n);
	std::vector<dvec3> v;
};


