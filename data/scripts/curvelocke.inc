EventScript_CurvelockeDodged::
	lockall
	playse SE_FLEE
	message sCurvelockeDodgedMessage
	waitmessage
	delay 60
	closemessage
	releaseall
	end

sCurvelockeDodgedMessage:
	.string "{STR_VAR_1} dodged the\nencounter!$"
