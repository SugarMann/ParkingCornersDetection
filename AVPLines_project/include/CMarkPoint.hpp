#pragma once

#include <opencv2/core/core.hpp>
#include <vector>

class CMarkPoint
{

private:
	//Private variables
	int m_length;
	std::vector<cv::Point2d> m_points_vector;
	cv::Mat m_image;

public:
	//CMarkPoint constructors
	CMarkPoint(int f_lenght, std::vector<cv::Point2d> f_points_vector, cv::Mat f_image);
	CMarkPoint();

	//Getters
	int getLenght();
	std::vector<cv::Point2d> getPoints();
	cv::Mat getImage();

	//Setters
	void setLength(int f_lenght);
	void setPoints(std::vector<cv::Point2d> f_points_vector);
	void setImage(cv::Mat f_image);

};