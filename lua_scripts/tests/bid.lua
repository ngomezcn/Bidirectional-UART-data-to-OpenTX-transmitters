--[[
The script's job is to make sure that the two-way communication works.

Parameters:
    Baud rate: 57600
    Parity: None
    Data bits: 8
    Stop bits: One
--]]
local function init()
	setSerialBaudrate(57600)
    serialWrite('Hello from TX16s')
end

local function run()
	local message = "\nECHO: "
	serialWrite(message .. serialRead(1))
end

return {run=run, init=init}