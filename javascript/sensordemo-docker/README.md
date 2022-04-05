# sensordemo

## Usage

- Set up an empty github repo to push to and set API_TOKEN to your AVH API Token
- Create a runner with docker and git installed and associate it with that empty project (Can be configured to run on an rpi instance in AVH)
- Execute the following to create and upload a test repo to that github repo **WARNING** any contents of that repo will be overwritten:
```
make gitrepo GITREMOTE="<URL to the repo you created>"
```
- It will execute a build on your runner and create a new device on AVH to test the output of the build on
