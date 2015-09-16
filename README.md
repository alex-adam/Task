# Task
Create a C++ Plugin which gets info from the Filesystem (for example Filenames or Images), and exposes it to QML. Later I can customize the QML file (because of the model) like I want, for example with a carousel.


Various Test Projects before the following Projects: How to get Files, (create own) Models, Listviews, Plugins….

Difficulties: Model, Plugin(!)




##Final Projects:

###Model Widget:
Create a Model in a normal Application, which gets the fileNames of a Folder and stores it in a model.

Problem: none


###Model Widget w FileReader Class:
Use a custom Object which fills the model. So all functionality is in FileReader-Class.
So if this would be a plugin I don’t need to use the model.

Problem: Model (from FileReader-Object) can not be used to set the model of the ListView
(though it works in the Model Widget Project without the FileReader Object)



###MainProgramm (+Plugin)
Plugin could not be imported in the MainProgramm…
So I copied the WhereTheIssAt Project and used this one 



###WhereTheIssAt (+Plugin)
Because of the Problems of MainProgramm (+ Plugin) I copied a previous test and used this as a template (That’s why it is called WhereTheIssAt…)

Plugin:
Object ISS contains the model Test which stores the FileNames of a specific folder.

MainProgramm:
Imports the Plugin and uses the Object to display the model in a listview/pathview
