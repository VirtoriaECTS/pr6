float fun_time(float hour, float minutes, float second) {
	return (hour * 60) + minutes + (second / 60);
}
float fun_time(float hour, float minutes) {
	return (hour * 60) + minutes;
}


//float fun_time(Time time) {
//    return (time.hour * 60) + time.minutes + (time.second / 60);
//}