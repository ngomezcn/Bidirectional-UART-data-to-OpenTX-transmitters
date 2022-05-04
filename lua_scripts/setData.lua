local function init()
    --setSerialBaudrate(57600)
    --serialWrite('hello from tx16\n')
end

local function run()
  
  --local field = getFieldInfo('input3')
  --model.setGlobalVariable(field.id, 0, 500)  
  
  --model.setGlobalVariable(getFieldInfo('thr').id, 0, 500)  
  --model.setGlobalVariable(getFieldInfo('input3').id, 0, 500)  
  --model.setGlobalVariable(getFieldInfo('ch3').id, 0, 4)  
  
  --local a = getValue('ch3')
  
  --print('id:' .. field.id .. ' val:' .. a)
  
  --print(accessTelemetryPush(0, 0, 0, 0, 0, 500))
end

return { run=run, init=init }