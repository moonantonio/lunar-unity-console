# Lunar Unity Mobile Console

Asset store link: [http://u3d.as/content/space-madness/lunar-mobile-console](http://bit.ly/1Ubzkpl)

Requires Unity 5.0 or later.

## Table of Contents
* [About](#about)
  * [Platform Support](#platform-support)
  * [Key Benefits](#key-benefits)
  * [Features](#features)
* [Installation](#installation)
* [Console Usage](#console-usage)
  * [Stack Trace Frames](#stack-trace-frames)
  * [Enable/Disable Plugin for Debug/Release](#enabledisable-plugin-for-debugrelease)
  * [Build System Support](#build-system-support)
* [Miscellaneous](#miscellaneous)
  * [Check for Updates](#check-for-updates)
  * [Bug Reports](#bug-reports)
  * [Contacts](#contacts)

## About
The project's goal is to build a high-performance and lightweight Unity iOS/Android logger using native platform's UI.  

### Platform Support
- **iOS**: requires iOS 8 or later
- **Android**: requires API Level 9 or later
  
### Key Benefits
- Native C/Objective-C/Java code with a low memory footprint.
- Works well with a huge log amount (up to 100000 entries).
- Built with a native platform UI (does NOT rely on Unity GUI).
- Resolution independent (looks great on highres/retina displays).
- Does NOT modify scenes or add assets.
- Removes completely from the release build with a single mouse click or from the command line (absolutely NO traces left).

### Features
- Instant error notification (never miss an unhandled exception again):  
<img src="https://cloud.githubusercontent.com/assets/786644/12805825/799b00e8-cab4-11e5-97ac-c90c50f0a9d2.PNG" width=320/>
- Quick logger output access with a multi touch gesture:  
![guid-bfa239b6-b55a-4f88-82ea-744f01cd9d77-web](https://cloud.githubusercontent.com/assets/786644/9218257/bc8e64c6-4085-11e5-96f7-f07080f310b0.png)
- Crystal clear font and a nice mobile-friendly interface:  
<img src="https://cloud.githubusercontent.com/assets/786644/12805854/c5c15d50-cab4-11e5-8b8c-acae74dd8c3a.PNG" width=320/>
- Filter by text and log type:  
<img src="https://cloud.githubusercontent.com/assets/786644/12805875/fcfd3686-cab4-11e5-851f-ab82e309b8e7.PNG" width=320/>
<img src="https://cloud.githubusercontent.com/assets/786644/12805880/16a506cc-cab5-11e5-8315-75af62cc164f.PNG" width=320/>
- Collapse similar elements:  
<img src="https://cloud.githubusercontent.com/assets/786644/12805895/4bd77956-cab5-11e5-8cf6-88ba9856e930.PNG" width=320/>
- Tap log entry to view stack trace:  
<img src="https://cloud.githubusercontent.com/assets/786644/12805978/9385167c-cab6-11e5-8bfc-ae9da0996358.PNG" width=320/>
- Scroll lock, copy-to-clipboard and e-mail options
- Automatic updates!
 
## Installation
- **Automatic**:  
  Unity Editor Menu:  Window ▶ Lunar Mobile Console ▶ Install...
  
- **Manual**:  
  Drag'n'Drop `LunarConsol.prefab` (Assets/LunarConsole/Scripts/LunarConsole.prefab) into your current scene's hierarchy and save your changes. You only need to do it once for your startup scene.

## Console Usage
The console can be open with one of the configured multi touch gestures. By default two finger swipe is used. To set a desired gesture:  

* Select 'LunarConsole' game object in the Hierarchy window.
* Find 'Lunar Console' script settings in the Inspector window.
* Chose a gesture from the 'Gesture' drop down list (to disable multi touch gestures - chose 'None')

### Stack Trace Frames
Touch the log entry to view its stack trace.

*Important*: make sure to set the "Development Build" flag in your publishing settings otherwise you will only be able to see exceptions traces.

For more info see:
http://docs.unity3d.com/Manual/PublishingBuilds.html

### Enable/Disable Plugin for Debug/Release
- To disable:  
  Window ▶ Lunar Mobile Console ▶ Disable
- To re-enable:  
  Window ▶ Lunar Mobile Console ▶ Enable
  
  When disabled, the plugin source files and resources would NOT appear in the generated native platform project.

### Build System Support
You can enable/disable the plugin from the command line (and make it a part of your build process)

- To disable:  
  ```<UNITY_BIN_PATH>  -quit -batchmode  -executeMethod LunarConsolePluginInternal.Installer.DisablePlugin```
- To enable:  
  ```<UNITY_BIN_PATH>  -quit -batchmode  -executeMethod LunarConsolePluginInternal.Installer.EnablePlugin```

```<UNITY_BIN_PATH>``` locations:
- Mac OS X: ```/Applications/Unity/Unity.app/Contents/MacOS/Unity```
- Windows: ```c:\Program Files\Unity\Editor\Unity.exe```
- Linux: _TBD_
 
## Miscellaneous
### Check for Updates
Window ▶ Lunar Mobile Console ▶ Check for updates...

### Bug Reports
Window ▶ Lunar Mobile Console ▶ Report bug...
 
### Contacts
For anything else: lunar.plugin@gmail.com

### Social Media
* Twitter: [@LunarPlugin](https://twitter.com/LunarPlugin)
* Facebook: [www.facebook.com/LunarPlugin](https://www.facebook.com/LunarPlugin)
* Unity Forums Thread: [[Lunar Mobile Console] High-performance Unity iOS/Android logger built with native platform UI](http://forum.unity3d.com/threads/lunar-mobile-console-high-performance-unity-ios-android-logger-built-with-native-platform-ui.347650/)
