const Builder = @import("std").Build;

pub fn build(b: *Builder) void {
    const exe = b.addExecutable(.{
        .name = "app",
        .link_libc = true,
        .root_source_file = .{ .path = "src/main.c" },
        .target = b.host,
    });

    exe.addIncludePath(.{ .path = "/usr/local/include" });
    exe.linkSystemLibrary("convert");

    b.installArtifact(exe);

    const run_exe = b.addRunArtifact(exe);
    const run_step = b.step("run", "Run the app");
    run_step.dependOn(&run_exe.step);
}
