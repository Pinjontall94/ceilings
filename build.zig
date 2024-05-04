const Builder = @import("std").Build;

pub fn build(b: *Builder) void {
    const exe = b.addExecutable(.{
        .name = "app",
        .link_libc = true,
        .target = b.host,
    });

    exe.addCSourceFile(.{ .file = .{ .path = "src/main.c" } });
    exe.addIncludePath(.{ .path = "/usr/local/include" });
    exe.linkSystemLibrary("convert");

    b.installArtifact(exe);

    const run_exe = b.addRunArtifact(exe);
    const run_step = b.step("run", "Run the app");
    run_step.dependOn(&run_exe.step);
}
