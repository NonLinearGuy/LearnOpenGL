#pragma once


/* 

	Number of bones in Animation and Number of bones in Model might differ,
	so to make sure that final animation transform matrix have same number of joint transforms
	as in the required animation, I kept "BonesData" Global. 

	New bones are added by animation if they were missing while loading model data. :-)

*/


#include<string>
#include <glm/glm.hpp>
#include <map>

using ModelID = unsigned;



