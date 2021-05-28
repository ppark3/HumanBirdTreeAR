# HumanBirdTreeAR

This application places 3D models of birds on specific parts of a person's body--specifically, the head, the shoulder, the right hand, and the floor right next to the left foot. If you'd like to deviate from birds, you can also use whatever 3D models you'd like.

## Register
Don't have an API key? Make sure to register for FREE at [echoAR](https://console.echoar.xyz).

## Setup
1. Clone this project and open in Unity.
2. Load the HumanTree scene from the `Assets/Scenes` folder in Unity.
3. Go to the `Assets/echoAR` folder and [set your echoAR API key](https://docs.echoar.xyz/unity/using-the-sdk) in the echoAR prefab. 
4. [Add 4 bird models in the echoAR console](https://docs.echoar.xyz/quickstart/add-a-3d-model). You can search up "bird" models and add them that way. If you do not want to use birds, feel free to add whatever models you'd like. **Please note that you must add 4 models!**

## Build and Run
[Build and run the AR application](https://docs.echoar.xyz/unity/adding-ar-capabilities#4-build-and-run-the-ar-application). 
Currently, the application has only been tested on iOS devices, but it should work on Android devices as well. 

## Important Notes
- The models may take a bit of time to load in at first, so please be patient! Once the models load in on one body, they will load in much quicker for every subsequent body. 
- The models will spawn randomly on the different body parts, so there is not a way to determine where to models will end up on the body. 
- You will most likely need to [adjust the scale of these models](https://docs.echoar.xyz/web-console/manage-pages/data-page/how-to-add-data#adding-metadata) yourself. Do note that the models in this application will **only be updated every time a new body is detected**. So to change the scale of these models in real time, update the metadata on the console, look away from the targeted human body, and then look back at the desired human body. 
- If you do not want to go through the hassle of scaling and matching these models yourself, feel free to search for and use the models that I used as well as their scale metadata.
![image](https://user-images.githubusercontent.com/31756724/120035425-980aa480-bfcc-11eb-8039-1f79cc77f4de.png)
![image](https://user-images.githubusercontent.com/31756724/120035982-6c3bee80-bfcd-11eb-9c55-f32fee3ac99d.png)
