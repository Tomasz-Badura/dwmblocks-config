static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ "",		"sb-nixstoresize",		600,				10 },
	{ "",		"sb-homesize",			600,				11 },
	{ "",		"sb-datetime",			1,					13 },
	{ "",		"sb-battery",			30,					14 },
	{ "",		"sb-volume",			30,					15 },
	{ "",		"sb-brightness",		0,					12 },
	{ "",		"sb-internet",			5,					16 },
	{ "",		"sb-ram",				15,					17 },
};

static char delim[] = " | ";
static unsigned int delimLen = 5;