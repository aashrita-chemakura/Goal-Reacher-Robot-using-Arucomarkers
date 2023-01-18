#include <rclcpp/rclcpp.hpp>
#include "odom_updater.h"

int main(int argc, char *argv[])
{
    // init
    rclcpp::init(argc, argv);
    // node
    auto node = std::make_shared<OdomBroadcaster>("odom_updater");
    rclcpp::spin(node);
    // shutdown
    rclcpp::shutdown();
}