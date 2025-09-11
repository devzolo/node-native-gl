import assert from "node:assert";
import { describe, it } from "node:test";

import GL from "../index.ts";

describe("GL Module Test", () => {
	it("VERSION_1_1 == 1", () => {
		assert.strictEqual(GL.VERSION_1_1, 1);
	});
});
