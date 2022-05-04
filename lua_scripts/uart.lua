local function init()
    setSerialBaudrate(57600)
    serialWrite('hello from tdx16\n')
    print("asd")
end

local function run()
  --local thrId = getFieldInfo('ch3').id
  --local thrInp = getValue(thrId)
  --print(thrInp)
  --model.setGlobalVariable(0, 0, 60)
  
--  local a = serialRead()
  local a = "sr:"
  print(a)
  serialWrite(a)
  

end

return { run=run, init=init }