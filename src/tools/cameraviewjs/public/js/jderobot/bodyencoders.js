// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.3
//
// <auto-generated>
//
// Generated from file `bodyencoders.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

(function(module, require, exports)
{
    var Ice = require("ice").Ice;
    var __M = Ice.__M;
    var jderobot = __M.require(module, 
    [
        "jderobot/common",
        "jderobot/body"
    ]).jderobot;
    
    var Slice = Ice.Slice;

    /**
     * Arm 
     **/
    jderobot.ArmEncodersData = Slice.defineObject(
        function(shoulder, elbow, clock)
        {
            Ice.Object.call(this);
            this.shoulder = shoulder !== undefined ? shoulder : new jderobot.BodyMotor();
            this.elbow = elbow !== undefined ? elbow : new jderobot.BodyMotor();
            this.clock = clock !== undefined ? clock : 0;
        },
        Ice.Object, undefined, 1,
        [
            "::Ice::Object",
            "::jderobot::ArmEncodersData"
        ],
        -1,
        function(__os)
        {
            jderobot.BodyMotor.write(__os, this.shoulder);
            jderobot.BodyMotor.write(__os, this.elbow);
            __os.writeInt(this.clock);
        },
        function(__is)
        {
            this.shoulder = jderobot.BodyMotor.read(__is, this.shoulder);
            this.elbow = jderobot.BodyMotor.read(__is, this.elbow);
            this.clock = __is.readInt();
        },
        false);

    jderobot.ArmEncodersDataPrx = Slice.defineProxy(Ice.ObjectPrx, jderobot.ArmEncodersData.ice_staticId, undefined);

    Slice.defineOperations(jderobot.ArmEncodersData, jderobot.ArmEncodersDataPrx);

    /**
     * Leg
     **/
    jderobot.LegEncodersData = Slice.defineObject(
        function(hip, knee, ankle, clock)
        {
            Ice.Object.call(this);
            this.hip = hip !== undefined ? hip : new jderobot.BodyMotor();
            this.knee = knee !== undefined ? knee : new jderobot.BodyMotor();
            this.ankle = ankle !== undefined ? ankle : new jderobot.BodyMotor();
            this.clock = clock !== undefined ? clock : 0;
        },
        Ice.Object, undefined, 1,
        [
            "::Ice::Object",
            "::jderobot::LegEncodersData"
        ],
        -1,
        function(__os)
        {
            jderobot.BodyMotor.write(__os, this.hip);
            jderobot.BodyMotor.write(__os, this.knee);
            jderobot.BodyMotor.write(__os, this.ankle);
            __os.writeInt(this.clock);
        },
        function(__is)
        {
            this.hip = jderobot.BodyMotor.read(__is, this.hip);
            this.knee = jderobot.BodyMotor.read(__is, this.knee);
            this.ankle = jderobot.BodyMotor.read(__is, this.ankle);
            this.clock = __is.readInt();
        },
        false);

    jderobot.LegEncodersDataPrx = Slice.defineProxy(Ice.ObjectPrx, jderobot.LegEncodersData.ice_staticId, undefined);

    Slice.defineOperations(jderobot.LegEncodersData, jderobot.LegEncodersDataPrx);

    /**
     * camera odometry
     **/
    jderobot.OdometryData = Slice.defineObject(
        function(odometry)
        {
            Ice.Object.call(this);
            this.odometry = odometry !== undefined ? odometry : null;
        },
        Ice.Object, undefined, 1,
        [
            "::Ice::Object",
            "::jderobot::OdometryData"
        ],
        -1,
        function(__os)
        {
            jderobot.seqFloatHelper.write(__os, this.odometry);
        },
        function(__is)
        {
            this.odometry = jderobot.seqFloatHelper.read(__is);
        },
        false);

    jderobot.OdometryDataPrx = Slice.defineProxy(Ice.ObjectPrx, jderobot.OdometryData.ice_staticId, undefined);

    Slice.defineOperations(jderobot.OdometryData, jderobot.OdometryDataPrx);

    /**
     * Interface to the Humanoid Body Encoders.
     **/
    jderobot.BodyEncoders = Slice.defineObject(
        undefined,
        Ice.Object, undefined, 1,
        [
            "::Ice::Object",
            "::jderobot::BodyEncoders"
        ],
        -1, undefined, undefined, false);

    jderobot.BodyEncodersPrx = Slice.defineProxy(Ice.ObjectPrx, jderobot.BodyEncoders.ice_staticId, undefined);

    Slice.defineOperations(jderobot.BodyEncoders, jderobot.BodyEncodersPrx,
    {
        "getArmEncodersData": [, 2, 2, , , ["jderobot.ArmEncodersData", true], [[jderobot.BodySide.__helper]], , , , true],
        "getLegEncodersData": [, 2, 2, , , ["jderobot.LegEncodersData", true], [[jderobot.BodySide.__helper]], , , , true],
        "getOdometryData": [, 2, 2, , , ["jderobot.OdometryData", true], [[jderobot.CameraBody.__helper]], , , , true]
    });
    exports.jderobot = jderobot;
}
(typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? module : undefined,
 typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? require : this.Ice.__require,
 typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? exports : this));
