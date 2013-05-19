package org.araqne.pcap.smb.response;
import org.araqne.pcap.smb.structure.SmbData;
//0xC3
public class GetPrintQueueResponse implements SmbData{

	boolean malformed = false;
	@Override
	public boolean isMalformed() {
		// TODO Auto-generated method stub
		return malformed;
	}
	@Override
	public void setMalformed(boolean malformed) {
		this.malformed = malformed;
	}
	// return STATUS_NOT_IMPLEMENTED;
	@Override
	public String toString(){
		return String.format("First Level : Get Print Queue Response\n" +
				"isMalformed = %s\n",
				this.malformed);
	}
}
