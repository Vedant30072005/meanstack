const http = require('http')

let port = 3000

const server = http.createServer(
    function(req,res){
        res.writeHead(200, {'Content-Type' :'text/plain'})
        users = [
            {
                id:101,
                name: "Shusruti"
            },
            {
                id:102,
                name: "Vedant"
            }
        ]
        res.write("This message is coming form server!")
        res.end("")
    }
)

server.listen(port,
    function (){
        console.log(`server is running on http://localhost:${port}`)
    }
)