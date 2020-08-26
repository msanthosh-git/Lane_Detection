/*this code contains main 
for lane detection */
#include <lane_detect.hh>

int main(){
    std::string path = "/home/santhosh/Pictures/piano-7.jpg";
    /*object for lane detection*/
    LD::Lane_Det Obj_Lane_Det;
    cv::Mat input_i, output_o;

    input_i = Obj_Lane_Det.read_images(path);
    cv::Mat lane = Obj_Lane_Det.lane_detection(input_i, output_o);
    Obj_Lane_Det.display_output(output_o);

    return 0;
}

