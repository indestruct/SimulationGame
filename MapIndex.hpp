#ifndef MAPINDEX_HPP_
#define MAPINDEX_HPP_

struct MapIndex
{
	int width;
	int height;

	struct MapIndex& operator=(const MapIndex& other)
	{
		width = other.width;
		height = other.height;
		return *this;
	}
	bool operator==(const MapIndex& other)
	{
		if(width == other.width && height == other.height)
		{
			return true;
		}
		return false;
	}
};

#endif /* MAPINDEX_HPP_ */
