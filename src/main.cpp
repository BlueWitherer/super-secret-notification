#include <cheeseworks.notifs/include/API.h>

#include <Geode/Geode.hpp>

using namespace geode::prelude;
using namespace cw::notifs;

// please don't ban me github
$on_mod(Loaded) {
    if (auto nm = NotifManager::get()) {
        nm->addSender(Sender::create("adolf"_spr, "Adolf Kirk", "adolf.png"_spr));
        nm->addSender(Sender::create("bart"_spr, "Bart Kirk", "bart.png"_spr));
        nm->addSender(Sender::create("cinema"_spr, "Absolute Kirk", "cinema.png"_spr));
        nm->addSender(Sender::create("diddy"_spr, "Charlie Diddy", "diddy.png"_spr));
        nm->addSender(Sender::create("drake"_spr, "Zesty Kirk", "drake.png"_spr));
        nm->addSender(Sender::create("dream"_spr, "Dream Kirk", "dream.png"_spr));
        nm->addSender(Sender::create("egirl"_spr, "E-Kirk", "egirl.png"_spr));
        nm->addSender(Sender::create("ellie"_spr, "Ellie Kirk", "ellie.png"_spr));
        nm->addSender(Sender::create("furry"_spr, "Kirky Furry", "furry.png"_spr));
        nm->addSender(Sender::create("gta6"_spr, "GTA Kirk", "gta6.png"_spr));
        nm->addSender(Sender::create("icarly"_spr, "iCharlie", "icarly.png"_spr));
        nm->addSender(Sender::create("ironman"_spr, "Charlie Stark", "ironman.png"_spr));
        nm->addSender(Sender::create("joker"_spr, "The Kirker", "joker.png"_spr));
        nm->addSender(Sender::create("jonah"_spr, "Jonah Kirk", "jonah.png"_spr));
        nm->addSender(Sender::create("kane"_spr, "Kane Kirk", "kane.png"_spr));
        nm->addSender(Sender::create("kash"_spr, "Charlie Patel", "kash.png"_spr));
        nm->addSender(Sender::create("kirk"_spr, "Charlie Kirk", "kirk.png"_spr));
        nm->addSender(Sender::create("maid"_spr, "Maid Charlie", "maid.png"_spr));
        nm->addSender(Sender::create("michaeljordan"_spr, "Charlie Jordan", "michaeljordan.png"_spr));
        nm->addSender(Sender::create("sixthsense"_spr, "Kirk Sense", "sixthsense.png"_spr));
        nm->addSender(Sender::create("son"_spr, "Charlie Son", "son.png"_spr));
        nm->addSender(Sender::create("speed"_spr, "iShowKirk", "speed.png"_spr));
        nm->addSender(Sender::create("tung"_spr, "Kirk Kirk Kirk Sahur", "tung.png"_spr));
        nm->addSender(Sender::create("zamn"_spr, "Charlie Zamn", "zamn.png"_spr));
    };
};
// please don't ban me github !!!