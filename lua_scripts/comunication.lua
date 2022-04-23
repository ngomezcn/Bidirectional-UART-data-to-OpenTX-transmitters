local function init()
    setSerialBaudrate(57600)
    serialWrite('hello from tx16\n')
end

local function run()
	local id = getFieldInfo("ch6")
	serialWrite('rsssi:'..getValue('ch6')..' - '..getValue(id)..' - 'id'\n')
end

return { run=run, init=init }