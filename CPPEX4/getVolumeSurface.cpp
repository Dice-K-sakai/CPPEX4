bool getVolumeSurface(double width, double height, double depth, double* volume, double* surface)
{
	bool ans;//‰ğ‚Ì—L–³

	*volume = width * height * depth;
	*surface = 2 * ((width * height) + (height * depth) + (width * depth));
	
	if ((*volume || *surface) > 0) 
	{
		ans = true;
	}
	else 
	{
		ans = false;
	}

	return ans;
}