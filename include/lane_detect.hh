/* This code contains header file
required for lane detection algorithm */
#pragma once
#include <iostream> // for standard I/O
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>


namespace LD{
    class Lane_Det{
        private:
            cv::Mat input, ouput;
            int x1, y1, x2, y2;
        public:
            Lane_Det(void);
            cv::Mat read_images(const std::string &file_path);
            cv::Mat lane_detection(cv::Mat &input, cv::Mat &output);
            void display_output(cv::Mat &output);
    };
}