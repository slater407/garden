const SerialPort = require('serialport');
const Readline = SerialPort.parsers.Readline;
const port = new SerialPort('/dev/cu.usbmodemFA131');
const parser = new Readline();
port.pipe(parser);

parser.on('data', function (data) {
  console.log(data.toString());
});
