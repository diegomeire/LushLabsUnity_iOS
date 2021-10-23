import UnityFramework
let package = Package(
    name: "UnityFramework",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "UnityFramework", 
            targets: ["UnityFramework"])
    ],
    targets: [
        .binaryTarget(
            name: "UnityFramework", 
            path: "UnityFramework.xcframework")
    ])