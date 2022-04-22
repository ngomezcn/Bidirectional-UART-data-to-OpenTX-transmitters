local function init()
    setSerialBaudrate(57600)
    serialWrite('hello from tx16\n')
end

local function run()
	
	serialWrite('rsssi:'..getValue('ch6')..'\n')
end

return { run=run, init=init }