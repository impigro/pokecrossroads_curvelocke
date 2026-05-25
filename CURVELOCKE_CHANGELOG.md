# Curvelocke Changelog

This is the changelog for the **Curvelocke** modifications applied on top of Pokémon Crossroads Beta 1.4. For the upstream pokeemerald-expansion engine changelog, see [CHANGELOG.md](CHANGELOG.md).

Entries are grouped by category, newest first within each category.

---

## Rules
The core Curvelocke challenge.

- **No-grind XP** — wild Pokémon weaker than the recipient grant zero experience. Per-recipient. Trainer XP untouched. Catching follows the same rule.

## Crossroads tweaks (gameplay adjustments)
Changes to Crossroads' base content to keep the no-grind rule playable.

- **Starter IV floor** — every IV on the starter Pokémon is guaranteed at least 15/31 (rolled in [15, 31] instead of [0, 31]). Preserves variance between runs while preventing softlocks from a bad-roll starter.
- **Starter STAB unified to lv6** — Pokémon Crossroads uses Gen 9 / Scarlet-Violet learnsets game-wide, which gave most starters their primary-type damaging move at lv3-4. All nine starters (Hoenn, Kanto, Johto) now learn STAB at lv6, mirroring the Johto trio's original schedule. The first rival's lv5 starter also no longer has STAB, restoring the Route 103 fight to a stat check.

## Quality-of-life modifications
Independent of the Curvelocke challenge — make the game feel responsive enough that no emulator speed multiplier is needed.

- **Press B to skip wild encounters** — hold B during the encounter transition to cancel the battle, *if* your lead follower outspeeds the wild Pokémon. Roaming legendaries, fishing, and scripted encounters are exempt.
- **Smooth audio on B-skip** — the encounter music crossfades back to overworld music when you skip an encounter (previously the overworld track restarted from the beginning, producing an audible "blip").
- **Modern EXP Share toggle** — Options-menu entry replaces the bag-item toggle. Default OFF; when ON, every alive non-egg party member shares XP (Gen 6+ behavior).
- **Faster overworld movement** — walking ~1.78×, running and biking ~1.25× faster than vanilla. Sprite animations rescaled to match.
- **Skip battle intro slide** — the slide-in animation at the start of every battle is skipped.
- **Halved warp fades** — door and map transitions fade twice as fast.
- **Snappier menus, fades, and battle transitions** — Start menu opens in one frame; party/bag/menu-selection fades twice as fast; trainer-spot "!" cuts from 52 to 20 frames; battle gray-flash twice as fast.
- **Text speed: Fast / Instant only** — the Options "TEXT SPEED" row drops Slow/Mid.
- **Shorter post-save confirmation** — "{PLAYER} saved the game!" auto-dismisses in ~0.33s instead of ~1s. A button still skips early.
- **2× PC box navigation** — cursor movement and box-scroll speed doubled.
