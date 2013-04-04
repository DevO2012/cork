// +-------------------------------------------------------------------------
// | empty3d.h
// | 
// | Author: Gilbert Bernstein
// +-------------------------------------------------------------------------
// | COPYRIGHT:
// |    Copyright Gilbert Bernstein 2013
// |    See the included COPYRIGHT file for further details.
// |    
// |    This file is part of the Cork library.
// |
// |    Cork is free software: you can redistribute it and/or modify
// |    it under the terms of the GNU Lesser General Public License as
// |    published by the Free Software Foundation, either version 3 of
// |    the License, or (at your option) any later version.
// |
// |    Cork is distributed in the hope that it will be useful,
// |    but WITHOUT ANY WARRANTY; without even the implied warranty of
// |    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// |    GNU Lesser General Public License for more details.
// |
// |    You should have received a copy 
// |    of the GNU Lesser General Public License
// |    along with Cork.  If not, see <http://www.gnu.org/licenses/>.
// +-------------------------------------------------------------------------
#pragma once

#include "vec.h"
#include "quantization.h" 

namespace Empty3d {

struct TriIn
{
    Vec3d p[3];
};
struct EdgeIn
{
    Vec3d p[2];
};

// triangle edge
struct TriEdgeIn
{
    TriEdgeIn(const Quantizator &quantizator) : quantizator(quantizator) {}

    TriIn   tri;
    EdgeIn  edge;

	const Quantizator	&quantizator; //todo
};
bool isEmpty(const TriEdgeIn &input);
Vec3d coords(const TriEdgeIn &input);

bool emptyExact(const TriEdgeIn &input, int &exact_count, int &degeneracy_count);
Vec3d coordsExact(const TriEdgeIn &input);

// 3 x triangles 
struct TriTriTriIn
{
	TriTriTriIn(const Quantizator &quantizator) : quantizator(quantizator) {}

    TriIn tri[3];

	const Quantizator	&quantizator; //todo
};
bool isEmpty(const TriTriTriIn &input);
Vec3d coords(const TriTriTriIn &input);

bool emptyExact(const TriTriTriIn &input, int &exact_count, int &degeneracy_count);
Vec3d coordsExact(const TriTriTriIn &input);

//extern int degeneracy_count; // count degeneracies encountered
//extern int exact_count; // count of filter calls failed
//extern int callcount; // total call count

/*
// exact versions

bool emptyExact(const Cell3d0 &c0,
                const Complex3d2 &complex,
                const Metric3d2 &metric);

void cell3d0toPointExact(SmVector3 &point,
                         const Cell3d0 &c0,
                         const Complex3d2 &complex,
                         const Metric3d2 &metric);
*/

} // end namespace Empty3d


