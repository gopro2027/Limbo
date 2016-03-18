//some function defenitions you can use
namespace VehicleMods {
  void spawnVehicle(char *model, void(*f)(int) = nullFunc);  //nullfunc is called upon successful spawning with the first arg being the cars object id
  void spawnVehicle(int modelhash, void(*f)(int) = nullFunc);
}
namespace OBJ {
  void forceCreateObject(char *object,Vector3 pos,Vector3 rot, bool freeze, void(*f)(int) = nullFunc);    //nullfunc is called when object is spawned with the first arg being the object id
  int attachProp(int player, int bodyPart, char* prop); //prop id has to be already loaded for this to work properly
  void attachPropAlreadySpawned(int player, int bodyPart, int prop, float cord[] = oooooooo, float rot[] = ooooooo);   //attach to a player
}
namespace forge {
  void markEntityForDeletion(int ent, void(*f)(int) = nullFunc);  //function f is only called apon successful deletion
}
namespace runlater {
  void runlater(int interval, void(*f)(int) = nullFunc, int callVarr = 0); //run that function after interval amount of loops the hook wen through
}



//put all of you guyses functions down here in this format:
namespace thenamespace {
  variables;
  functions();
  functionsToBeLooped();
}
