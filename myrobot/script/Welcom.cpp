#include <gazebo/gazebo.hh>
#include <iostream>

namespace gazebo
{
  class HelloWorldPlugin : public WorldPlugin
  {
    public: HelloWorldPlugin() : WorldPlugin()
            {
              std::cout << "Welcome to Ahmed's World!" << std::endl;
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };

  GZ_REGISTER_WORLD_PLUGIN(HelloWorldPlugin)
}
