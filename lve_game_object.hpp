#pragma once

namespace lve {
	class LveGameObject {
	public:
		using id_t = unsigned int;

		static LveGameObject createGameObject() {
			static id_t currentId = 0;
			return LveGameObject{ currentId++ };
		}

		LveGameObject(const LveGameObject&) = delete;

		const id_t getId() { return id; }

	private:
		LveGameObject(id_t objId) : id{ objId }{}

		id_t id;
	};
} // namespace lve