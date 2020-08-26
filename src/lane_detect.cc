/*This code contains algorithm 
for lane detection*/

#include <lane_detect.hh>
namespace LD{
    
        Lane_Det::Lane_Det(void){
            /*constructor*/
            int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        }
        cv::Mat Lane_Det::read_images(const std::string &file_path){
            input = cv::imread(file_path, 0);
            return input;
        }
        cv::Mat Lane_Det::lane_detection(cv::Mat &input, cv::Mat &output){
            output = input;
            return output;
        }
         void Lane_Det::display_output(cv::Mat &output){
             imshow("output", output);
             cv::waitKey(0);
         }
    
}