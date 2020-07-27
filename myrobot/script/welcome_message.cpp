#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginJMRobot : public WorldPlugin
  {
    public: WorldPluginJMRobot() : WorldPlugin()
            {
              printf("Welcome to JM's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginJMRobot)
}

