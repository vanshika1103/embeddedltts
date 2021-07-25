<circuit noLinStep="10" animate="0" noLinAcc="5" type="simulide_0.1" speed="1000000" reactStep="50">
 
Node-10: 
<item x="-740" itemtype="Node" y="132" labely="-24" labelx="-16" labelrot="0" vflip="1" valLabely="0" rotation="0" hflip="1" valLabelx="0" id="Node-10" valLabRot="0" Show_id="false" objectName="Node-10"/>
 
Ground-9: 
<item x="-740" itemtype="Ground" y="148" labely="-24" labelx="-16" labelrot="0" vflip="1" valLabely="0" rotation="0" hflip="1" valLabelx="0" id="Ground-9" valLabRot="0" Show_id="false" objectName="Ground-9"/>
 
Led-8: 
<item Resistance="0.59999999999999998" labelx="-16" rotation="-180" valLabelx="0" valLabRot="0" Show_id="false" y="132" id="Led-8" hflip="1" labelrot="0" Grounded="false" Threshold="2.3999999999999999" Color="0" itemtype="Led" valLabely="0" x="-692" labely="-24" vflip="1" MaxCurrent="0.029999999999999999" objectName="Led-8"/>
 
atmega328-7: 
<item labelx="0" Ser_Port="false" rotation="0" valLabelx="0" valLabRot="0" Show_id="true" y="20" id="atmega328-7" hflip="1" labelrot="0" Program="../LTTS_EMBEDDED_C/bin/Debug/LTTS_EMBEDDED_C.hex" itemtype="AVR" Ser_Monitor="false" valLabely="0" x="-612" labely="-20" vflip="1" objectName="atmega328-7" Mhz="16"/>
 
Resistor-6: 
<item Resistance="100" labelx="-12" rotation="0" valLabelx="-16" Unit=" O" valLabRot="0" Show_id="false" y="132" id="Resistor-6" hflip="1" labelrot="0" Show_res="true" itemtype="Resistor" valLabely="6" x="-652" labely="-24" vflip="1" objectName="Resistor-6"/>
 
Switch-5: 
<item labelx="-16" DT="false" rotation="0" valLabelx="0" valLabRot="0" Show_id="false" y="28" id="Switch-5" hflip="1" Norm_Close="false" labelrot="0" Poles="1" itemtype="Switch" valLabely="0" x="-700" labely="-24" vflip="1" objectName="Switch-5"/>
 
Switch-4: 
<item labelx="-16" DT="false" rotation="0" valLabelx="0" valLabRot="0" Show_id="false" y="68" id="Switch-4" hflip="1" Norm_Close="false" labelrot="0" Poles="1" itemtype="Switch" valLabely="0" x="-700" labely="-24" vflip="1" objectName="Switch-4"/>
 
Node-3: 
<item x="-740" itemtype="Node" y="68" labely="-24" labelx="-16" labelrot="0" vflip="1" valLabely="0" rotation="0" hflip="1" valLabelx="0" id="Node-3" valLabRot="0" Show_id="false" objectName="Node-3"/>
 
Probe-2: 
<item x="-652" itemtype="Probe" y="52" labely="-16" labelx="16" labelrot="45" vflip="1" valLabely="0" rotation="-45" hflip="1" Show_volt="true" valLabelx="16" id="Probe-2" valLabRot="45" Show_id="false" PlotterCh="0" objectName="Probe-2"/>
 
Probe-1: 
<item x="-652" itemtype="Probe" y="12" labely="-16" labelx="16" labelrot="45" vflip="1" valLabely="0" rotation="-45" hflip="1" Show_volt="true" valLabelx="16" id="Probe-1" valLabRot="45" Show_id="false" PlotterCh="0" objectName="Probe-1"/>
 
Connector-11: 
<item pointList="-676,132,-668,132" labelx="-16" rotation="0" valLabelx="0" endpinid="Resistor-6-lPin" valLabRot="0" Show_id="false" y="132" id="Connector-11" hflip="1" labelrot="0" startpinid="Led-8-lPin" itemtype="Connector" valLabely="0" x="-676" labely="-24" vflip="1" objectName="Connector-11" enodeid="Circ_eNode-12"/>
 
Connector-13: 
<item pointList="-636,132,-620,132" labelx="-16" rotation="0" valLabelx="0" endpinid="atmega328-7-PB0" valLabRot="0" Show_id="false" y="132" id="Connector-13" hflip="1" labelrot="0" startpinid="Resistor-6-rPin" itemtype="Connector" valLabely="0" x="-636" labely="-24" vflip="1" objectName="Connector-13" enodeid="Circ_eNode-14"/>
 
Connector-15: 
<item pointList="-716,28,-740,28,-740,68" labelx="-16" rotation="0" valLabelx="0" endpinid="Node-3-0" valLabRot="0" Show_id="false" y="28" id="Connector-15" hflip="1" labelrot="0" startpinid="Switch-5-pinP0" itemtype="Connector" valLabely="0" x="-716" labely="-24" vflip="1" objectName="Connector-15" enodeid="Circ_eNode-16"/>
 
Connector-17: 
<item pointList="-716,68,-740,68" labelx="-16" rotation="0" valLabelx="0" endpinid="Node-3-1" valLabRot="0" Show_id="false" y="68" id="Connector-17" hflip="1" labelrot="0" startpinid="Switch-4-pinP0" itemtype="Connector" valLabely="0" x="-716" labely="-24" vflip="1" objectName="Connector-17" enodeid="Circ_eNode-16"/>
 
Connector-18: 
<item pointList="-740,132,-740,132" labelx="-16" rotation="0" valLabelx="0" endpinid="Node-10-0" valLabRot="0" Show_id="false" y="132" id="Connector-18" hflip="1" labelrot="0" startpinid="Ground-9-Gnd" itemtype="Connector" valLabely="0" x="-740" labely="-24" vflip="1" objectName="Connector-18" enodeid="Circ_eNode-16"/>
 
Connector-19: 
<item pointList="-708,132,-740,132" labelx="-16" rotation="0" valLabelx="0" endpinid="Node-10-1" valLabRot="0" Show_id="false" y="132" id="Connector-19" hflip="1" labelrot="0" startpinid="Led-8-rPin" itemtype="Connector" valLabely="0" x="-708" labely="-24" vflip="1" objectName="Connector-19" enodeid="Circ_eNode-16"/>
 
Connector-20: 
<item pointList="-740,132,-740,68" labelx="-16" rotation="0" valLabelx="0" endpinid="Node-3-2" valLabRot="0" Show_id="false" y="132" id="Connector-20" hflip="1" labelrot="0" startpinid="Node-10-2" itemtype="Connector" valLabely="0" x="-740" labely="-24" vflip="1" objectName="Connector-20" enodeid="Circ_eNode-16"/>
 
Connector-27: 
<item pointList="-684,28,-628,28,-628,36,-620,36" labelx="-16" rotation="0" valLabelx="0" endpinid="atmega328-7-PD0" valLabRot="0" Show_id="false" y="28" id="Connector-27" hflip="1" labelrot="0" startpinid="Switch-5-switch0pinN" itemtype="Connector" valLabely="0" x="-684" labely="-24" vflip="1" objectName="Connector-27" enodeid="enode-27"/>
 
Connector-28: 
<item pointList="-684,68,-620,68" labelx="-16" rotation="0" valLabelx="0" endpinid="atmega328-7-PD4" valLabRot="0" Show_id="false" y="68" id="Connector-28" hflip="1" labelrot="0" startpinid="Switch-4-switch0pinN" itemtype="Connector" valLabely="0" x="-684" labely="-24" vflip="1" objectName="Connector-28" enodeid="enode-28"/>
 
PlotterWidget-25: 
<item childrenRect="" modal="false" width="200" acceptDrops="false" maximumHeight="200" accessibleName="" sizeIncrement="" styleSheet="" minimized="false" maximumSize="" autoFillBackground="false" rect="" y="0" focusPolicy="0" mouseTracking="false" geometry="" isActiveWindow="true" frameGeometry="" windowModality="0" visible="false" accessibleDescription="" palette="" enabled="true" childrenRegion="" normalGeometry="" inputMethodHints="0" height="200" focus="false" minimumHeight="200" font="MS Shell Dlg 2,7.8,-1,5,50,0,0,0,0,0" windowOpacity="1" minimumSizeHint="" contextMenuPolicy="1" frameSize="" maximized="false" windowTitle="" objectName="PlotterWidget-25" cursor="" windowIconText="" windowIcon="" baseSize="" updatesEnabled="true" MaxVolt="500" statusTip="" layoutDirection="0" maximumWidth="1000" x="0" size="" windowModified="false" pos="" MinVolt="-500" toolTipDuration="-1" itemtype="Plotter" toolTip="" locale="" windowFilePath="" minimumSize="" fullScreen="false" minimumWidth="200" sizePolicy="" whatsThis="" sizeHint=""/>
 
SerialPortWidget-26: 
<item childrenRect="" SettingsProp=",0,3,0,0,0" modal="false" width="313" acceptDrops="false" maximumHeight="170" accessibleName="" sizeIncrement="" styleSheet="" minimized="false" maximumSize="" autoFillBackground="false" rect="" y="0" focusPolicy="0" mouseTracking="false" geometry="" isActiveWindow="true" frameGeometry="" windowModality="0" visible="false" accessibleDescription="" palette="" enabled="true" childrenRegion="" normalGeometry="" inputMethodHints="0" height="141" focus="false" minimumHeight="0" font="MS Shell Dlg 2,7.8,-1,5,50,0,0,0,0,0" windowOpacity="1" minimumSizeHint="" contextMenuPolicy="1" frameSize="" maximized="false" windowTitle="Settings" objectName="SerialPortWidget-26" cursor="" windowIconText="" windowIcon="" baseSize="" updatesEnabled="true" statusTip="" layoutDirection="0" maximumWidth="450" x="0" size="" windowModified="false" pos="" toolTipDuration="-1" itemtype="SerialPort" toolTip="" locale="" windowFilePath="" minimumSize="" fullScreen="false" minimumWidth="0" sizePolicy="" whatsThis="" sizeHint=""/>
 
</circuit>
