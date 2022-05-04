local function run()
	setSerialBaudrate(9600)
	serialWrite(getValue('thr')..'\n')
end

return {run=run}