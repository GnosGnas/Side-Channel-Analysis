

Controller.cs:
- AES is done in both software and hardware
- PT is generated and text_in is its name and given random input
- text_ans for s/w encryption (for ciphertext)
- text_out for h/w encryption
- both are stored in tempString's
- It also contains info like num_trace
- others - worker funcs, cancel(), run(), 

Form_main.cs:
- Change key function present here - key is added with random data
- Start and stop button " " " " - inti_module(), init_controller() with tbox_numtrace, key and delay, tracer_run() - stop will tracer_cancel()
- others - form_controller_load(), form_main(), format()

Form_main.designer.cs:
- InitializeComponent()

Manager.cs:
- tracer_run(), tracer_cancel(), event handlers

IBlockCipher.cs:
- func declarations for setKey(), setEnc(), setDec(), writeText(), readText(), execute()

SASEBO_G.cs:
- Cipher modes and adresse params here
- FIDI_USB port
- open(0), write addr ??//////////////////
- close()
- setKey(key and len), setEnc() and setDec defn, writeText() and readText() defn
- write(addr, dat) - some mods done and then written into port..???
- read(addr) - " " " " 
- check writeBurst() and readBurst()

SASEBO_IF.cs:
- RS-232 port is used
- port open is done here
- flush() - reads Bytes - Debug.write()??
- FTDI_USB defn

AES.cs:
- AES encryption and decryption
- decrpt returns null - only encryption is done

Codes in Properties may not be useful
