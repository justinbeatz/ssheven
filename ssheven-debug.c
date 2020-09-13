/* 
 * ssheven
 * 
 * Copyright (c) 2020 by cy384 <cy384@cy384.com>
 * See LICENSE file for details
 */

/* handy debugging string conversions */

/* convert libssh2 errors into strings */
const char* libssh2_error_string(int i)
{
	switch (i)
	{
		case LIBSSH2_ERROR_NONE:
			return "no error (LIBSSH2_ERROR_NONE)";
		case LIBSSH2_ERROR_BANNER_RECV:
			return "LIBSSH2_ERROR_BANNER_RECV";
		case LIBSSH2_ERROR_BANNER_SEND:
			return "LIBSSH2_ERROR_BANNER_SEND";
		case LIBSSH2_ERROR_INVALID_MAC:
			return "LIBSSH2_ERROR_INVALID_MAC";
		case LIBSSH2_ERROR_KEX_FAILURE:
			return "LIBSSH2_ERROR_KEX_FAILURE";
		case LIBSSH2_ERROR_ALLOC:
			return "LIBSSH2_ERROR_ALLOC";
		case LIBSSH2_ERROR_SOCKET_SEND:
			return "LIBSSH2_ERROR_SOCKET_SEND";
		case LIBSSH2_ERROR_KEY_EXCHANGE_FAILURE:
			return "LIBSSH2_ERROR_KEY_EXCHANGE_FAILURE";
		case LIBSSH2_ERROR_TIMEOUT:
			return "LIBSSH2_ERROR_TIMEOUT";
		case LIBSSH2_ERROR_HOSTKEY_INIT:
			return "LIBSSH2_ERROR_HOSTKEY_INIT";
		case LIBSSH2_ERROR_HOSTKEY_SIGN:
			return "LIBSSH2_ERROR_HOSTKEY_SIGN";
		case LIBSSH2_ERROR_DECRYPT:
			return "LIBSSH2_ERROR_DECRYPT";
		case LIBSSH2_ERROR_SOCKET_DISCONNECT:
			return "LIBSSH2_ERROR_SOCKET_DISCONNECT";
		case LIBSSH2_ERROR_PROTO:
			return "LIBSSH2_ERROR_PROTO";
		case LIBSSH2_ERROR_PASSWORD_EXPIRED:
			return "LIBSSH2_ERROR_PASSWORD_EXPIRED";
		case LIBSSH2_ERROR_FILE:
			return "LIBSSH2_ERROR_FILE";
		case LIBSSH2_ERROR_METHOD_NONE:
			return "LIBSSH2_ERROR_METHOD_NONE";
		case LIBSSH2_ERROR_AUTHENTICATION_FAILED:
			return "LIBSSH2_ERROR_AUTHENTICATION_FAILED";
		case LIBSSH2_ERROR_PUBLICKEY_UNVERIFIED:
			return "LIBSSH2_ERROR_PUBLICKEY_UNVERIFIED";
		case LIBSSH2_ERROR_CHANNEL_OUTOFORDER:
			return "LIBSSH2_ERROR_CHANNEL_OUTOFORDER";
		case LIBSSH2_ERROR_CHANNEL_FAILURE:
			return "LIBSSH2_ERROR_CHANNEL_FAILURE";
		case LIBSSH2_ERROR_CHANNEL_REQUEST_DENIED:
			return "LIBSSH2_ERROR_CHANNEL_REQUEST_DENIED";
		case LIBSSH2_ERROR_CHANNEL_UNKNOWN:
			return "LIBSSH2_ERROR_CHANNEL_UNKNOWN";
		case LIBSSH2_ERROR_CHANNEL_WINDOW_EXCEEDED:
			return "LIBSSH2_ERROR_CHANNEL_WINDOW_EXCEEDED";
		case LIBSSH2_ERROR_CHANNEL_PACKET_EXCEEDED:
			return "LIBSSH2_ERROR_CHANNEL_PACKET_EXCEEDED";
		case LIBSSH2_ERROR_CHANNEL_CLOSED:
			return "LIBSSH2_ERROR_CHANNEL_CLOSED";
		case LIBSSH2_ERROR_CHANNEL_EOF_SENT:
			return "LIBSSH2_ERROR_CHANNEL_EOF_SENT";
		case LIBSSH2_ERROR_SCP_PROTOCOL:
			return "LIBSSH2_ERROR_SCP_PROTOCOL";
		case LIBSSH2_ERROR_ZLIB:
			return "LIBSSH2_ERROR_ZLIB";
		case LIBSSH2_ERROR_SOCKET_TIMEOUT:
			return "LIBSSH2_ERROR_SOCKET_TIMEOUT";
		case LIBSSH2_ERROR_SFTP_PROTOCOL:
			return "LIBSSH2_ERROR_SFTP_PROTOCOL";
		case LIBSSH2_ERROR_REQUEST_DENIED:
			return "LIBSSH2_ERROR_REQUEST_DENIED";
		case LIBSSH2_ERROR_METHOD_NOT_SUPPORTED:
			return "LIBSSH2_ERROR_METHOD_NOT_SUPPORTED";
		case LIBSSH2_ERROR_INVAL:
			return "LIBSSH2_ERROR_INVAL";
		case LIBSSH2_ERROR_INVALID_POLL_TYPE:
			return "LIBSSH2_ERROR_INVALID_POLL_TYPE";
		case LIBSSH2_ERROR_PUBLICKEY_PROTOCOL:
			return "LIBSSH2_ERROR_PUBLICKEY_PROTOCOL";
		case LIBSSH2_ERROR_EAGAIN:
			return "LIBSSH2_ERROR_EAGAIN";
		case LIBSSH2_ERROR_BUFFER_TOO_SMALL:
			return "LIBSSH2_ERROR_BUFFER_TOO_SMALL";
		case LIBSSH2_ERROR_BAD_USE:
			return "LIBSSH2_ERROR_BAD_USE";
		case LIBSSH2_ERROR_COMPRESS:
			return "LIBSSH2_ERROR_COMPRESS";
		case LIBSSH2_ERROR_OUT_OF_BOUNDARY:
			return "LIBSSH2_ERROR_OUT_OF_BOUNDARY";
		case LIBSSH2_ERROR_AGENT_PROTOCOL:
			return "LIBSSH2_ERROR_SOCKET_RECV";
		case LIBSSH2_ERROR_SOCKET_RECV:
			return "LIBSSH2_ERROR_ENCRYPT";
		case LIBSSH2_ERROR_ENCRYPT:
			return "LIBSSH2_ERROR_ENCRYPT";
		case LIBSSH2_ERROR_BAD_SOCKET:
			return "LIBSSH2_ERROR_BAD_SOCKET";
		case LIBSSH2_ERROR_KNOWN_HOSTS:
			return "LIBSSH2_ERROR_KNOWN_HOSTS";
		case LIBSSH2_ERROR_CHANNEL_WINDOW_FULL:
			return "LIBSSH2_ERROR_CHANNEL_WINDOW_FULL";
		case LIBSSH2_ERROR_KEYFILE_AUTH_FAILED:
			return "LIBSSH2_ERROR_KEYFILE_AUTH_FAILED";

		default:
			return "LIBSSH2 unknown error number";
	}

	return "libssh2_error_string should never return from here";
}

/* convert OT event types into strings */
const char* OT_event_string(int i)
{
	switch (i)
	{
		case T_LISTEN:
			return "T_LISTEN";
		case T_CONNECT:
			return "T_CONNECT";
		case T_DATA:
			return "T_DATA";
		case T_EXDATA:
			return "T_EXDATA";
		case T_DISCONNECT:
			return "T_DISCONNECT";
		case T_ERROR:
			return "T_ERROR";
		case T_UDERR:
			return "T_UDERR";
		case T_ORDREL:
			return "T_ORDREL";
		case T_GODATA:
			return "T_GODATA";
		case T_GOEXDATA:
			return "T_GOEXDATA";
		case T_REQUEST:
			return "T_REQUEST";
		case T_REPLY:
			return "T_REPLY";
		case T_PASSCON:
			return "T_PASSCON";
		case T_RESET:
			return "T_RESET";
		case T_BINDCOMPLETE:
			return "T_BINDCOMPLETE";
		case T_UNBINDCOMPLETE:
			return "T_UNBINDCOMPLETE";
		case T_ACCEPTCOMPLETE:
			return "T_ACCEPTCOMPLETE";
		case T_REPLYCOMPLETE:
			return "T_REPLYCOMPLETE";
		case T_DISCONNECTCOMPLETE:
			return "T_DISCONNECTCOMPLETE";
		case T_OPTMGMTCOMPLETE:
			return "T_OPTMGMTCOMPLETE";
		case T_OPENCOMPLETE:
			return "T_OPENCOMPLETE";
		case T_GETPROTADDRCOMPLETE:
			return "T_GETPROTADDRCOMPLETE";
		case T_RESOLVEADDRCOMPLETE:
			return "T_RESOLVEADDRCOMPLETE";
		case T_GETINFOCOMPLETE:
			return "T_GETINFOCOMPLETE";
		case T_SYNCCOMPLETE:
			return "T_SYNCCOMPLETE";
		case T_MEMORYRELEASED:
			return "T_MEMORYRELEASED";
		case T_REGNAMECOMPLETE:
			return "T_REGNAMECOMPLETE";
		case T_DELNAMECOMPLETE:
			return "T_DELNAMECOMPLETE";
		case T_LKUPNAMECOMPLETE:
			return "T_LKUPNAMECOMPLETE";
		case T_LKUPNAMERESULT:
			return "T_LKUPNAMERESULT";
		case kOTProviderIsDisconnected:
			return "kOTProviderIsDisconnected";
		case kOTSyncIdleEvent:
			return "kOTSyncIdleEvent";
		case kOTProviderIsReconnected:
			return "kOTProviderIsReconnected";
		case kOTProviderWillClose:
			return "kOTProviderWillClose";
		case kOTProviderIsClosed:
			return "kOTProviderIsClosed";
		default:
			return "unknown OT event type";
	}

	return "OTLook_string should never return from here";
}
