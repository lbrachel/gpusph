#ifndef _STILLWATER_H
#define	_STILLWATER_H

#include "Problem.h"
#include "Point.h"
#include "Rect.h"
#include "Cube.h"

class StillWater: public Problem {
	private:
		Cube		experiment_box;
		PointVect	parts;
		PointVect	boundary_parts;
		float		h, w, l;
		float		H; // still water level

	public:
		StillWater(const Options &);
		~StillWater(void);

		int fill_parts(void);
		uint fill_planes(void);
		void draw_boundary(float);
		void copy_to_array(float4 *, float4 *, particleinfo *);
		void copy_planes(float4*, float*);

		void release_memory(void);
};


#endif	/* _STILLWATER_H */