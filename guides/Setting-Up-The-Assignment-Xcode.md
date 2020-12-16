# Setting up the Assignment - Xcode

[Click here to view a video guide on setting up the repository](https://www.loom.com/share/cdfa8d570b4e4549a3aa9c184fe2e87f)

## Step 1

Before following this guide ensure you have downloaded the twitter ready version of openframeworks, this is different from the one you may have downloaded from the openFrameworks website. You can download the required version for OSX below. Once downloaded unzip the folder and save it somewhere sensible (e.g. your documents).

For OSX: [https://drive.google.com/file/d/1MJDggWdejufQapDRHfqGTF7B6SbrPOxa/view?usp=sharing](https://drive.google.com/file/d/1MJDggWdejufQapDRHfqGTF7B6SbrPOxa/view?usp=sharing)

&nbsp;
&nbsp;

## Step 2

So far we have successfully created your repository on GitHub, but we need to download this to your machine so you can write your code and then send this back to GitHub. For this we will use GitHub desktop.

Open GitHub desktop and clone the repository. If you have no existing repositories you can do this by clicking the ```Clone a Repository``` button on the opening screen. If you already have some repositories downloaded you can add another on by selecting ```File --> Clone Repository``` from the menu bar.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/get-started-screen.png">
</p>

&nbsp;
&nbsp;

## Step 3

You will be presented with *Clone a Repository*  screen similar to the one below. You should look for the repository you wish to clone from those listed. This will be named something like: CodeLab-II-20-21/data-driven-app-option-2-yourgithubusername

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/clone-opt2.png">
</p>

## Step 4

We need to ensure the repository gets cloned to our openFrameworks installation. Click ```Choose...```next to the local path field and browse to the ```myApps``` folder of your twitter ready openFrameworks installation. Once you have found the folder click ```Open```.

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/osx-of-twitter.png">
</p>

Now click ```Clone``` to download the repository.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/clone-opt2a.png">
</p>

&nbsp;
&nbsp;

## Step 5

To check the project has cloned successfully to the correct location navigate to the ```myApps``` folder of your twitter ready openFrameworks installation. Inside here you should find your repository.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/cloned-opt2.png">
</p>

&nbsp;
&nbsp;

## Step 6

Now we need to create the openFrameworks project to begin coding. To do so we will use the project generator.

First we need to ensure the openFrameworks path is set correctly. Click the cog icon to navigate to the settings then the magnifying glass on the openFrameworks path input field (*the project generator may recognise an incorrect path and take you straight to this screen*).

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/of-path.png">
</p>

Make sure the path is set to the root folder of your twitter ready openFrameworks installation.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/of-root-osx.png">
</p>

&nbsp;
&nbsp;

## Step 7

Click the ```create/update``` tab to return to the main project generator settings and click ```Import```

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/project-generator.png">
</p>

&nbsp;
&nbsp;

## Step 8

Navigate to your repository folder located in the ```myApps``` folder and click ```Open```

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/import-opt2.png">
</p>

&nbsp;
&nbsp;

## Step 9

In the addons field select all the required addons show in the image below and click ```Update```. This will create all the required project files.

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/addons-opt2.png">
</p>

&nbsp;
&nbsp;

## Step 10

After a few moments (please wait after clicking update and do not click update again - this will duplicate the process) the below message will appear. Click ```Open in IDE``` and your project will open in Xcode.

<p align="center">
  <img width="50%" src="https://jakehobbs.co.uk/markdown_images/success-opt2.png">
</p>

&nbsp;
&nbsp;

## Step 11

Before the basic project will run correctly you need to alter the credentials file located in the ```bin/data``` folder of your project. Navigate to this folder and right click the ```credentials.json``` file. Select ```Open with → TextEdit```

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/credentials.png">
</p>

&nbsp;
&nbsp;

## Step 12

Edit this file replacing the YOUR_CONSUMER_KEY_HERE etc with the keys generated you generated when creating your Twitter API Account. If you have not already created these keys [follow this guide here](creating-Twitter-API-Account). When copying be careful that you keep the quotation marks and no additional spaces are added.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/keys-replace.png">
</p>

&nbsp;
&nbsp;

## Step 13

You are now ready to test if the application builds with the starter code. Click the build and run icon :arrow_forward:

The first time the project builds may take a while, be patient, subsequent builds will be a lot quicker.

When successfully built you should get a small window with indicating how many tweets have been received. In the starter code provided the actual tweets are displayed in the console window, this starter code is set to receive tweets with a smiley face.

<p align="center">
  <img width="30%" src="https://jakehobbs.co.uk/markdown_images/tweet-stats.png">
</p>

&nbsp;
&nbsp;

## Step 14

You are now ready to begin developing your Data Driven App. Github Desktop will keep track of your changes. You should regular make commits to ensure you can fall back to previous versions if things go wrong. You should also push your commits back up to your Github repository often, this will make sure you have a backup of your work. To make commits write a descriptive message for the changes you have made and click ```commit to master```.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/commit-opt2.png">
</p>

It would also be a good idea to make use of branches as you add new features. This will allow you to test these new features in the knowledge that you can switch back to your “master” branch if the new feature doesn’t work out.

&nbsp;
&nbsp;

## Step 15

When making commits you should also push your your work to GitHub this will make sure you have a backup of your work. Most importantly when you are happy with your final solution don't forget to make sure you make one final commit and push to your final code before the deadline. To push code to GitHub click ```Push Origin``` after making a commit.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/push-origin.png">
</p>

&nbsp;
&nbsp;

## Step 16

To check your code has submitted correctly go to your repository on GitHub, the URL for this will be: ```github.com/codelab-ii-20-21/data-driven-app-option-2-YOURGITHUBUSERNAME```.

You can also easily get to your repository on GitHub by clicking the ```View on GitHub``` button in GitHub Desktop.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/view-on-github.png">
</p>
