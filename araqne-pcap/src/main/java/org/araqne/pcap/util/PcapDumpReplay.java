/*
 * Copyright 2010 NCHOVY
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.araqne.pcap.util;

import java.io.EOFException;
import java.io.File;
import java.io.IOException;

import org.araqne.pcap.PcapInputStream;
import org.araqne.pcap.file.PcapFileInputStream;
import org.araqne.pcap.live.PcapDevice;
import org.araqne.pcap.packet.PcapPacket;

/**
 * @author xeraph
 */
public class PcapDumpReplay {
	private PcapDumpReplay() {
	}

	public static void replay(PcapDevice device, File file) throws IOException {
		PcapInputStream is = new PcapFileInputStream(file);
		try {
			while (true) {
				PcapPacket packet = is.getPacket();
				device.write(packet);
			}
		} catch (EOFException e) {
		}
	}
}
