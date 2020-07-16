#! ../prog/BCI2000Shell
@cls & ..\prog\BCI2000Shell %0 %* #! && exit /b 0 || exit /b 1\n


execute script FindPortablePython3.bat  # this is necessary so that BCI2000 can find Python


change directory $BCI2000LAUNCHDIR
show window; set title ${Extract file base $0}
reset system
startup system localhost

start executable PythonSource          --local --PythonSrcClassFile=TrefoilSource.py #--PythonSrcShell=0 --PythonSrcLog=Srclogger.txt
#start executable SignalGenerator       --local
start executable PythonSignalProcessing --local --PythonSigClassFile= #--PythonSigShell=0 --PythonSigLog=Siglogger.txt
#start executable DummySignalProcessing --local
#start executable StimulusPresentation --local
start executable PythonApplication      --local --PythonAppClassFile=TriangleApplicationPsychoPy.py # --PythonAppProfile=appprofile.prof #--PythonAppShell=0 --PythonAppLog=Applogger.txt

wait for connected 600

load parameterfile "../parms/PythonDemo1_Triangle.prm"
