enum swStatus {
    //% block="On"
    On = 1,
    //% block="Off"
    Off = 0
}

namespace test {

    /**
     * Single LED set Light
    */
    //% blockId="ELF_Display_singleLEDSet" block="Single LED set |%swStatus"
    //% weight=22
    //% blockGap=10
    //% shim=elfshield::singleLEDSet
    export function singleLEDSet(isOn: number): void {
        return;
    }

}
